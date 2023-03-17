function isPalindrome(s: string): boolean {
    // convert all letters to lower case
    // concate this letters and remove all non-alphabitic characters
    let arr : string[] = [];
    arr = s.split(/[^A-Za-z0-9]/);
    let str:string = "";
    arr.forEach((element)=>{
        str += element.toLowerCase();
    })
    console.log(str);
    let it_end:number = str.length-1;
    let it_begin:number=0;
    for(;it_begin<=it_end;it_end--,it_begin++){
        if(str[it_begin] !== str[it_end])
            return false;
        
    }
    return true;
    
    
};