Algoritmo "Abastecimento de Aeronaves"

var
  trechoPlanejado, trechoAlternativo, trechoFinal: inteiro
  quantidadeMaxima: real
  escolhas: caractere
  combustivelExistente, combustivel, combustivelFinal, media: real


inicio
  escreva(" Escreva quantos Km contém o trecho planejado \n")
  leia(trechoPlanejado)

  escreva(" Escreva quantos Km contém o trecho alternativo \n")
  leia(trechoAlternativo)
  
  trechoFinal <- trechoAlternativo + trechoPlanejado
  
  escreva(" Escreva qual a capacidade máxima do tanque em litros \n")
  leia(quantidadeMaxima)
  
  escreva(" Qual a média da aeronave em Litros/Km? \n")
  leia(media)
  
  procedimento combustivel ()
  var
  comparar: real
  inicio
  escreva(" Quanto combustível?")
  leia(combustivelExistente)

  comparar <- (combustivelExistente + combustivel)
  comparar <- comparar + comparar * 30/100

  SE((comparar > quantidadeMaxima) ou (comparar < media * trechoFinal)  ) ENTAO
  escreva(" Voo reprovado, reveja seu planejamento \n" )
  SENAO
  combustivelFinal <- comparar
  escreva("Voo Aprovado, bom voo!")
  FIMSE
  fimprocedimento
  

  escreva(" Quanto combustivel irá ser adicionado a aeronave? \n")
  leia(combustivel)
  
  escreva(" Já existe combustível na aeronave? S/N \n")
  leia(escolhas)
  
    SE ((escolhas = "S") ou (escolhas = "s")) ENTAO
    combustivel();
    SENAO
    combustivelFinal <- combustivel + combustivel * 30/100
    SE ((combustivelFinal > quantidadeMaxima) ou (combustivelFinal < media * trechoFinal) ) ENTAO
    escreva("Voo reprovado, reveja seu planejamento \n")
    SENAO
    escreva("Voo Aprovado, bom Voo \n")
    FIMSE

fimalgoritmo
