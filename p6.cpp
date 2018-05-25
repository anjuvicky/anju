include <cstdio>

void remove_extra_whitespaces(char* input, char* output)
{
    int inputIndex = 0;
    int outputIndex = 0;
    while(input[inputIndex] != '\0')
    {
        output[outputIndex] = input[inputIndex];

        if(input[inputIndex] == ' ')
        {
            while(input[inputIndex + 1] == ' ')
            {
                
                inputIndex++;
            }
        }

        outputIndex++;
        inputIndex++;
    }

    
    output[outputIndex] = '\0';
}

int main(int argc, char **argv)
{
    char input[0x255] = "asfa sas    f f dgdgd  dg   ggg";
    char output[0x255] = "NO_OUTPUT_YET";
    remove_extra_whitespaces(input,output);

    printf("input: %s\noutput: %s\n", input, output);

    return 1;
}
