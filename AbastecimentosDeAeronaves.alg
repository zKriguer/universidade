Algoritmo "Abastecimento de Aeronaves"

var
  trechoPlanejado, trechoAlternativo, trechoFinal: inteiro
  quantidadeMaxima: real
  escolhas: caractere
  combustivelExistente, combustivel, combustivelFinal, media: real


inicio
  escreva(" Escreva quantos Km cont?m o trecho planejado \n")
  leia(trechoPlanejado)

  escreva(" Escreva quantos Km cont?m o trecho alternativo \n")
  leia(trechoAlternativo)
  
  trechoFinal <- trechoAlternativo + trechoPlanejado
  
  escreva(" Escreva qual a capacidade m?xima do tanque em litros \n")
  leia(quantidadeMaxima)
  
  escreva(" Qual a m?dia da aeronave em Litros/Km? \n")
  leia(media)
  
  procedimento combustivel ()
  var
  comparar: real
  inicio
  escreva(" Quanto combust?vel?")
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
  

  escreva(" Quanto combustivel ir? ser adicionado a aeronave? \n")
  leia(combustivel)
  
  escreva(" J? existe combust?vel na aeronave? S/N \n")
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
