void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c);

void mx_isos_triangle(unsigned int length, char c) {
    int current_level = 1;
    for(unsigned int i=0;i<length;++i)  {
        for(int j = 0; j< current_level; ++j){
            mx_printchar(c);
        }
        mx_printchar('\n');
        current_level++;
    }
}
