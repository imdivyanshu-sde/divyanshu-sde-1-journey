let x=5;
let guess=Number(prompt("guess the x"));
while(guess!=x){
    guess=Number(prompt(" wrong guess the x again"));
}
alert("you guess the correct number "+x);