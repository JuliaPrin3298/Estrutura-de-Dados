Colocar um elemento, não repetido, num vetor de 5 posições


C=1
Enquanto C    <= 5 faça
Início
	Se C=1 
então
			Início
				Ler A[C]
C=C+1
			Fim
		senão
			Início
				Chave=0
				Ler valor
				Para i=1 até C-1 faça
					Se A[i]=valor então Chave =1
				Se Chave = 0 
então
						Início
							A[C]=valor
							C=C+1
						Fim
					senão 
Exibir ”Valor já existe. Tente outro valor”
			Fim
Fim



Formar um vetor X através dos elementos não repetidos do vetor A (não vazio) contendo 5 elementos


C=1
Chave =0
X[1]=A[1]
Para i=2 até 5 faça
	Início
		Para j=1 até C faça
			Se A[i]=X[j] Então Chave = 1
		Se Chave = 0
			Então
				Início
					C=C+1
					X[C]=A[i]
				Fim
		Chave=0
	Fim





Classificação


Para i =1 ate n-1 faça
	Para j=i+1 até n faça
		Se A[i]>A[j] então
			Início
				temp=A[i]
				A[i]=A[j]
				A[j]=temp
			Fim

				


União


Para i=1 até (2Xn) faça
	Início
		U[i]=A[i]
		U[i+n]=B[i]
	fim



Intersecção


C=0
Para i=1 até n faça
	Para j=1 até n faça
		Se A[i]=B[j] 
			Então
				Início
					C=C+1
					IT[C]=A[I]
				Fim
Se C=0 então exibir “Intersecção vazia”
	Caso contrário
		Para i=1 até C faça
			Exibir IT[C]






Complementar A em relação a B


C=0
Para i=1 até n faça
	Inicio
		Chave=1
		Para j=1 até n faça
			Se A[i]=B[j] então 
				início
chave=0
j=1000
				fim
		Se chave =1 então
			Inicio
				C=C+1
				CAB[C]=A[i]
				Chave=1
			fim
	fim
		
