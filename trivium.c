	#include <stdint.h>
	#include <string.h>
	#include <unistd.h>
	#include <fcntl.h>

	//Routing to get random numbers
	int randomnum(void)
 	{
        uint32_t  buffer[32];
        unsigned long urandom;
	uint32_t myrand[1];

        urandom = open("/dev/urandom", O_RDONLY);
        read(urandom, buffer,32);
        //buffer contains the random data
        close(urandom);
	myrand[0]=buffer[0];

	return *myrand;
	}

	//loading Key
	int loadingk(unsigned char *S){
	
	unsigned int key[80];
	int i;

	while (i!=81){
	key[i]= S[i];
	i++;
	}
	if (i>=81){
	key[i]=0;
	i++;}
	}

	//Key and IV setup
	void initialized (){
	int i,n,m,o,p;
	unsigned int t1, t2, t3;
	unsigned int S[288];

	for(i=1;i<5; i++){
		for(n=1;n<289; n++){
	t1= S[66]^S[91] && S[92]^S[93]^S[171]; 
	t2= S[162]^S[175] && S[176]^S[177]^S[264];
	t3= S[243]^S[286] && S[287]^S[288]^S[69];
	for (m=1; m<94; m++){ 
 	t3= S[1];
	S[m]= S[m+1];
		}
	for(o=94; o<178; o++){
	t1= S[94];
	S[o]=S[o+1];
	}

	for(p=178; p<289; p++){
	t2= S[178];
	S[p]=S[p+1];
	}
				}
			}
	
}
	
	//key stream generation
	void keygenaration (){
	uint8_t t1,t2,t3,z;
	unsigned int S[288];

	t1 = S[66]  ^ S[94];
	t2 = S[162] ^ S[177];
	t3 = S[243] ^ S[288];
	z  = t1^t2^t3;
	t1 ^= (S[91]  & S[91])  ^ S[171];
	t2 ^= (S[175] & S[176]) ^ S[264];
	t3 ^= (S[286] & S[287]) ^ S[69];
}
	int main ( ){

	int i;
	unsigned int key[80];

	//Assigning the key
	for (i=0; i<80; i++)
	key[80]= randomnum();



return 0;

}
