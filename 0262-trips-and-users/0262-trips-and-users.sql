/* Write your T-SQL query statement below */


WITH filtered_trips AS (
    SELECT request_at, COUNT(id) AS canncelled_trips
    FROM Trips T
    JOIN Users U1 ON T.client_id = U1.users_id AND U1.banned = 'No'
    JOIN Users U2 ON T.driver_id = U2.users_id AND U2.banned = 'No'
    WHERE T.status <> 'completed' AND 
     request_at >= '2013-10-01' AND  request_at <='2013-10-03'
	GROUP BY request_at

),
groubed_trips AS (
	SELECT request_at  ,COUNT (id) AS total_trips
	FROM Trips AS T
	JOIN Users U1 ON T.client_id = U1.users_id AND U1.banned = 'No'
    JOIN Users U2 ON T.driver_id = U2.users_id AND U2.banned = 'No'
	WHERE request_at >= '2013-10-01' AND  request_at <='2013-10-03'
    GROUP BY request_at
    
)
SELECT gt.request_at AS Day,
	  (CASE
	  WHEN ft.request_at IS NULL THEN CAST(0 AS decimal(18,2))
	  ELSE cast(cast( ft.canncelled_trips AS FLOAT)/gt.total_trips AS decimal(18,2))
	  END )
	  AS [Cancellation Rate]

FROM groubed_trips AS gt
LEFT JOIN filtered_trips AS ft ON gt.request_at = ft.request_at ;