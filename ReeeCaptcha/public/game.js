//connect to server
var socket = io.connect(window.location.href);

//get html elements
var clickBtn = document.getElementById("test")


//networking out
clickBtn.addEventListener("test", function(){
    socket.emit("clickCake")
}); 
//networking in
socket.on("cakeCountUpdate",function(data){
    document.getElementById("cakes").innerHTML=data+" cakes";
})