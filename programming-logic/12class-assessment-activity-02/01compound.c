int main(){

	float valorTotal = 0;
	float juros = 50;
	float mes;
	
	for(mes = 1; mes <= 6; mes++){
		
		valorTotal += juros;
	}
	
	printf("O valor total eh de %.2f", valorTotal);
	
}