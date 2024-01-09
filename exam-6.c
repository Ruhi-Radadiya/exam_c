#include<stdio.h>
#include<string.h>
main(){
	struct movie{
		char title[50];
		char gener[50];
		char language[50];
	};
	struct movie m1;
	
	printf("enter first movie detail\n");
	printf("enter movie title:");
	scanf("%s",m1.title);
	printf("enter movie gener:");
	scanf("%s",m1.gener);
	printf("enter movie language:");
	scanf("%s",m1.language);
	printf("____________________________________\n");
	
	struct movie m2;
	
	printf("enter second movie detail\n");
	printf("enter movie title:");
	scanf("%s",m2.title);
	printf("enter movie gener:");
	scanf("%s",m2.gener);
	printf("enter movie language:");
	scanf("%s",m2.language);
	printf("____________________________________\n");
	
	struct movie m3;
	
	printf("enter third movie detail\n");
	printf("enter movie title:");
	scanf("%s",m3.title);
	printf("enter movie gener:");
	scanf("%s",m3.gener);
	printf("enter movie language:");
	scanf("%s",m3.language);
	printf("____________________________________\n");
	
	struct movie m4;
	
	printf("enter fourth movie detail\n");
	printf("enter movie title:");
	scanf("%s",m4.title);
	printf("enter movie gener:");
	scanf("%s",m4.gener);
	printf("enter movie language:");
	scanf("%s",m4.language);
	printf("____________________________________\n");
	
	struct movie m5;
	
	printf("enter fifth movie detail\n");
	printf("enter movie title:");
	scanf("%s",m5.title);
	printf("enter movie gener:");
	scanf("%s",m5.gener);
	printf("enter movie language:");
	scanf("%s",m5.language);
	printf("____________________________________\n");
}
