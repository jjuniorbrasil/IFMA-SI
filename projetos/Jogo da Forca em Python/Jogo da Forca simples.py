# Desafio em Python - Crie um jogo da forca
# Feito por J. Júnior - SI - 2º Período

import random

palavras = [
    "python", "programação", "linguagem", "computador", "algoritmo", 
    "variável", "lista", "loop", "condicional", "função", 
    "dicionário", "classe", "objeto", "herança", "método", 
    "biblioteca", "interface", "arquivo", "string", "inteiro", 
    "flutuante", "booleano", "operador", "expressão", "debug", 
    "vetor", "matriz", "aleatório", "ordenar", "buscar", 
    "índice", "código", "desenvolvimento", "web", "backend", 
    "frontend", "API", "framework", "git", "repositório", 
    "branch", "merge", "pull", "push", "commit", 
    "merge", "controle", "versão", "terminal", "linha", 
    "comando", "IDE", "debugger", "compilar", "interpretar", 
    "comentário", "documentação", "teste", "assert", "refatorar", 
    "agile", "scrum", "kanban", "sprint", "produto", 
    "cliente", "usuário", "interface", "usabilidade", "design", 
    "responsivo", "mobile", "desktop", "servidor", "cliente", 
    "API", "REST", "JSON", "XML", "HTTP", 
    "HTTPS", "roteamento", "middleware", "autenticação", "autorização", 
    "token", "criptografia", "segurança", "senha", "hash", 
    "endpoint", "query", "parametro", "status", "404"
]

def palpite():
    tentativa = input()
    
    if len(tentativa) > 1:
        print('Insira apenas uma letra!')
        tentativa = palpite()
        return tentativa
    else:
        return tentativa
    
def bonecoVitoria():
    print('\n\\o/')
    print(' |')
    print('/\\')
    return 1

def bonecoDerrota():
    print('_')
    print('|')
    print('o')
    print('/|')
    print('/\\')
    return 0

i = random.randint(1, 99)
r = ''
c = 0
respostas = []

print('\n========= JOGO DA FORCA =========\n Insira uma letra: ')
##print('\nDebug (palavra sorteada):' + palavras[i])

## DECLARAÇÃO DOS CONJUNTOS

conjuntopalavra = {''}
for letra in palavras[i]:
    conjuntopalavra.add(letra)
conjuntoresposta = {''}
conjuntotentativas = {''}

# LOOP PRINCIPAL
    
while c < len(palavras[i]):

    # -------------- O jogador acertou todas as letras ----------------

    if conjuntopalavra == conjuntoresposta:
            for c in palavras[i]:
                print(c, end=' ')  
            print('\n\nVocê ganhou!')
            bonecoVitoria()
            break

    # --------------- Loop que printa as letras acertadas na tela --------------
        
    for letrap in palavras[i]:
        if letrap in respostas:
            print(letrap, end=" ")
        else:
            print('_', end=" ")
    print('     ')

    # --------------- Input do jogador --------------

    p = palpite()                     ## PALPITE
    conjuntotentativas.add(p)
    
    # --------------- Resultados --------------

## CASO O JOGADOR ERRE
    ## O contador aumenta em um e o jogador perde. A quantidade de tentativas é igual à quantidade de letras da palavra sorteada.

    if palavras[i].count(p) <= 0:   
        c += 1
        print('\nTentativas restantes: ' + str(len(palavras[i]) - c))
        print('Palpites equivocados: ' + str(conjuntotentativas.difference(conjuntoresposta)) + '\n')
        if (len(palavras[i]) - c == 0):
            print('...')
            bonecoDerrota()

## CASO O JOGADOR ACERTE
    ## A resposta é adicionada à lista de caracteres que foram acertados

    else:                           
        respostas.append(p)
        conjuntoresposta.add(p)
        ##print('\nDebug (conjunto da palavra sorteada):' + str(conjuntopalavra))
        ##print('Debug (conjunto dos palpites):' + str(conjuntopalavra))


print('========================')