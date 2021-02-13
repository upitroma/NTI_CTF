//connect to server
var socket = io.connect(window.location.href);

//get html elements
var clickBtn = document.getElementById("clickCake"),
    cakeCountDisplay = document.getElementById("cakes")


//networking out
clickBtn.addEventListener("click", function(){
    socket.emit("clickCake")
}); 

//networking in
socket.on("cakeCountUpdate",function(data){
    document.getElementById("cakes").innerHTML=data+" cakes";
})
socket.on("upgrade",function(data){
    document.getElementById("cps").innerHTML=data+" cakes/second";
})
socket.on("clicked", function() {
    console.log("Clicked!")
});