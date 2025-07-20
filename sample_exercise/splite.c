int main() {
   char string[50];
   scanf("%c",&char);
   // Extract the first token
   char * token = strtok(string, "%");
   printf( " %s\n", token ); //printing the token
   return 0;
}

