# paradigmas26ufma
# atividade1
# yasmin cantanhede santos
    
    INICIO DO PROGRAMA

    // Entrada
    ESCREVA "Qual o nome do cliente?"
    LEIA nome

    ESCREVA "Qual idade do cliente?"
    LEIA idade

    ESCREVA "Qual saldo do cliente?"
    LEIA saldo

    ESCREVA "Qual o preço do produto?"
    LEIA precoProduto

    ESCREVA "Qual a quantidade desejada?"
    LEIA quantidade do produto

    calcular valorTotal = precoProduto * quantiade do produto
    ESCREVA "Valor total da compra"

    SE a idade >= 18 E saldo >= valorTotal
        ESCREVA "Negado: Cliente com saldo e com idade"
    
    SENAO SE idade >= 18 E saldo < valorTotal
    ESCREVA "Negado: Cliente com idade e sem saldo"

    SENAO SE idade < 18 E saldo >= valorTotal
    ESCREVA "Negado: Cliente sem idade e com saldo"

    SENAO
    ESCREVA "Negado: Cliente SEM idade e SEM saldo"

    FIM

