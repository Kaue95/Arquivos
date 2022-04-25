

function Mudar(){
    mensagem.style="display: block";
    mensagemb.style="display:none";
    mensagemc.style="display:none";
}
function Mudarb(){
    mensagemb.style="display: block";
    mensagem.style="display:none";
    mensagemc.style="display:none";
}
function Mudarc(){
    mensagemc.style="display: block";
    mensagem.style="display:none";
    mensagemb.style="display:none";
}

var visibilidade = true; 

function ocultarExibir(){ 

    if(visibilidade){
    document.getElementById("mensagem").style.display = "none";
    visibilidade = false;
    }else{
    document.getElementById("mensagem").style.display = "block";
    visibilidade = true;
    }
}
var visibilidade2 = false;
function ocultarExibir2(){ 

    if(visibilidade2){
    document.getElementById("mensagemb").style.display = "none";
    visibilidade2 = true;
    }else{
    document.getElementById("mensagemb").style.display = "block";
    visibilidade2 = false;
    }
}