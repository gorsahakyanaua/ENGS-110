
// 1 ex

/*#include <stdio.h>


void swap (char* a, char* b){

	char tmp = *a;
	*a = *b;
	*b = tmp;

}
void rem (char* arr, int size){
	
	char* end = arr;
	char* start = arr;
		while (*end != '\0'){
	end++;
	}
	end--;
	for (int i = 0; i< size; ++i){
			if(start< end){
	
			swap(end, start);
			end--;
			start++;
		}
	}

}
int main(){

	char arr[]= {"Hello final 1"};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("The word is: \n");
	for (int i = 0; i<size; i++){
	printf("%c",arr[i]);
	}
	printf("\n");
	rem(arr, size);
	printf("The new word is: \n");
	for (int i = 0; i<size; i++){
	printf("%c",arr[i]);
	

}

	printf("\n");
	return 0;




}*/
/*
 ex 4
#include <stdio.h>

int conv(char a) {

	if (a == '0'){
		int b = 0;
		return b;
	}
	if (a == '1'){
		int b = 1;
		return b;
	}
		if (a == '2'){
		int b = 2;
		return b;
	}
	if (a == '3'){
		int b = 3 ;
		return b;
	}
	
	if (a == '4'){
		int b = 4;
		return b;
	}
	if (a == '5'){
		int b = 5;
		return b;
	}
		if (a == '6'){
		int b = 6;
		return b;
	}
	if (a == '7'){
		int b = 7;
		return b;
	}
	if (a == '8'){
		int b = 8;
		return b;
	}
	if (a == '9'){
		int b = 9;
		return b;
	}
	int l (char* c, int size){
		int arr[];
		for (int i = 0; i< size ;++i ){
		 arr[i] = conv(c[i]);
		
		}
	return arr;
	}
	
	
}
int main (){
	char* a = {"12"};
	int size = sizeof(arr)/sizeof(arr[0]);
	int b = l(a);
       	printf("%d\n", b);	



}*//*
      ex 5
#include <stdio.h>
	int main (){
	char arr[] ={ How, are, you};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	for (int i = 0; i< size; i++){
	
	arr[i]= arr[i+1];
	
	printf("%c", arr[i]);	
	}

	} 


*/




