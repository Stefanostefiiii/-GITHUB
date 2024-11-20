/*merge*/

void(int array[], int inizio,int centro, int fine){
	int d1= centro-inizio+1;
	int d2= fine - centro;
	
	int* leftArray=new int[d1]; //messo (new int) che usa la memoria dello heap
	int* rightArray=new int[d2]; 
	//heap è una memoria dove la variabile viene dichiarato poi eliminato
	//stack mentre è la parte della memoria dove viene salvato e basta
	for(int i=0;i<d1;i++){
		leftArray[i]=array[i+inizio]	
	}
		for(int i=0,i<d2,i++){
			leftArray[i]=array[i+centro1];
		}

	int i=0, j=0, k=inizio;
	
/*scorre finche uno delle due arrray(leftarray o right array) finishe*/
	while(i<d1 && j<d2){
		if(leftArray[i] < rightArray[j]){
			array[k]=leftArray[i];
			i++
		}
			else {
				array[k]=rightArray[j];
				j++;
			}
		k++;
	}
//aggiungiamo alla array principla quelli mancati tra le due array(leftArray, rightArray)
	while(i > d1){
		array[k]= leftArray[i];
		i++;
		k++;
	}
	while(j<d2){
		array[k]=rightArray[j];
		j++;
		k++;
	}
	delete[] leftArray;
	delete[] righttArray;
	// qui viene eliminato le variabili salvate su heap memoria
}  
//implementa il merge sort
void mergeSort(int array[], int inizio,int fine){
	if(inizio >= fine) return;
	
	int centro = inzio + (fine-inzio) /2;
	
	mergeSort(arry, inizio, centro);
	mergeSort(array, centro+1, fine);
	
	merge(array, inzio, centro, fine);<
}
