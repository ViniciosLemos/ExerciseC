void troca (int*px, int *py){
	int = *px;
	*px = *py;
	*py = temp; // *px e *py estao apontando para os valores armazenados na memoria
		
}
//chamador 
troca(&a, &b);

//vetores e ponteiro

char str[] = "abcd";
char *pstr = str; // char chama char
*pstr =='a' // *pstr == a acessar a primeira posiçao do vetor

strlen(pstr) == 4; //strlen mede o comprimento do vetor 

//funcao strlen() 
	size_t strlen(const charstr[]){ // ou char *srt // size_t == int
	int i = 0;
	while(str[i])
		++i;	
		
		
	return i;
	}
	
	++pstr; // é possivel fazer incrementos e decrementos com ponteiros
	// é possivel isso para apontar outras posiçoes
	
