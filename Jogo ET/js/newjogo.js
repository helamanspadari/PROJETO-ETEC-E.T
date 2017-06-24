function iniciaJogo(){

	var url = window.location.search;
	
	var nivel_jogo = url.replace("?", "");

	var tiro = 0;

	if(nivel_jogo == 1) { //1 fácil -> 10 tiros
		tiro = 10;
	}

	if(nivel_jogo == 2) { //2 normal -> 5 tiros
		tiro = 5;
	}
	
	if(nivel_jogo == 3) { //3 difícil -> 3 tiros
		tiro = 3;
	}

	//quantidade de árvores
	var qtd_arvores = 100;
	
	cria_arvores(qtd_arvores);

	//exibe quantidade de árvores
	document.getElementById('arvores_inteiras').innerHTML = qtd_arvores;
	document.getElementById('arvores_clicadas').innerHTML = 0;
	document.getElementById('tiro').innerHTML = tiro;
}

function cria_arvores(qtd_arvores){

	for(var i = 1; i <= qtd_arvores; i++){
		var x = 0;
		var arvore = document.createElement("img");
		arvore.src = 'img/arvore2.png';
		arvore.style.width = '40px';
		arvore.style.margin = '10px';
		arvore.id = i;
		arvore.onclick = function(){ clicar(this); };

		document.getElementById('fundo').appendChild(arvore);
	}
}

var n;
n = Math.floor(Math.random() * 100+1); //aleatoriedade dentre 1 e 100
document.write(n + "</br");

function clicar(a){
	if (a.id != n){
		var id_arvore = a.id;
		document.getElementById(id_arvore).src = 'img/X.png';
	}else{
		var id_arvore = a.id;
		document.getElementById(id_arvore).src = 'img/et2.png';

		setTimeout(function(){window.location.href = 'venceu.html'; }, 1000);
	}
	pontuacao(-1);
	tiro(-1);
}

function pontuacao(acao){

	var arvores_inteiras = document.getElementById('arvores_inteiras').innerHTML;
	var arvores_clicadas  = document.getElementById('arvores_clicadas').innerHTML;
	var tiro = document.getElementById('tiro').innerHTML;

	arvores_inteiras = parseInt(arvores_inteiras);
	arvores_clicadas = parseInt(arvores_clicadas);
	tiro = parseInt(tiro);

	arvores_inteiras = arvores_inteiras + acao;
	arvores_clicadas = arvores_clicadas - acao;
	tiro = tiro + acao;

	document.getElementById('arvores_inteiras').innerHTML = arvores_inteiras;
	document.getElementById('arvores_clicadas').innerHTML = arvores_clicadas;
	document.getElementById('tiro').innerHTML = tiro;

	situacao_jogo(arvores_inteiras);
}	