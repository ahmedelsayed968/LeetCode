function createBinaryString (nMask:number) :string{
  for (var nFlag:number = 0, nShifted:number = nMask, sMask:string = ""; nFlag < 32;
       nFlag++, sMask += String(nShifted >>> 31), nShifted <<= 1);
  return sMask;
}
function reverseBits(n: number): number {
    console.log(n);
	let num_str:string = createBinaryString(n);
    num_str = num_str.split("").reverse().join("");
    console.log(num_str);
    let num:number = parseInt(num_str,2);
    
    return num;
};
