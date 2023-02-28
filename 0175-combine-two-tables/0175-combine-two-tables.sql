
# SELECT firstname,lastname,
#        city , state
#        FROM Person
# OUTER JOIN Address ON Person.personId=Address.personId;

# select a.FIRSTNAME, a.LASTNAME, b.CITY, b.STATE from PERSON a, ADDRESS b where a.PERSONID = b.PERSONID;
SELECT Person.firstname,Person.lastname,Address.city,Address.state FROM Person
LEFT JOIN Address ON Person.PersonId = Address.PersonId;