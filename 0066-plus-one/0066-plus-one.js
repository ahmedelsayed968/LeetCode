/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    // reverse
    // map 
    let reminder = 1;
    let ret = digits.reverse().map((element,)=>{
        
        let sum =  element+reminder;
        reminder = Math.trunc(sum/10);
        return sum%10;
    });
    console.log(reminder);
    if(reminder){
        ret.push((reminder));
    }
    
    return ret.reverse();
    
};