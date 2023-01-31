#include <iostream>
#include <sha.h>
#include <string>

void hash_sha1(string input); 


int main(){

    string user_input; 
    cout << "Enter a string to hash (SHA-1 algo):" << endl;

    cin >> user_input;

    hash_sha1(user_input);

}

void hash_sha1(string input){

    unsigned char digest(SHA_DIGEST_LENGTH);

    SHA1((unsigned char*)&input, strlen(input), (unsigned char*)&digest);

    char mdString(SHA_DIGEST_LENGTH*2+1);

    for (int i =0; i < SHA_DIGEST_LENGTH; i ++){
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i])
    }

    printf("SHA1 digest: %s\n", mdString);

}

