var socket = io.connect(window.location.href);


var input = document.getElementById("input")
var output = document.getElementById("output")
input.value=""

outputArray=[]
input.addEventListener("keydown", event => {
    if (event.isComposing || event.code === "Enter") {
        addToOutput(">>> " +input.value)
        socket.emit("command",input.value)
        input.value=""
    }
});

socket.on("serverResponse",function(response){
    addToOutput(response)
})

function addToOutput(s){
    if(outputArray.length>10){
        outputArray.splice(0,1)
    }
    outputArray.push("<p>"+s+"</p>")

    output.innerHTML=""
    for(i=0;i<outputArray.length;i++){
        output.innerHTML+=outputArray[i]
    }
    console.log(outputArray)
}