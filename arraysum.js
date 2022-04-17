function summation(ary){
    let sum=0
    for(let x=0;x<ary.length;x++){
        sum=sum+ary[x]
    }
    console.log("Summation is :"+sum);
}
var ary=[2,4,5,6];
summation(ary)