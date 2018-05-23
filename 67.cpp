bool isDigitLetter::filter(string word) {
    int digit = 0;
    int letter = 0;
    if(word.empty()) {
        return false;
    }
    for(int i = 0; i < word.length(); i++) {
        if(!isalpha((unsigned char)word[i]) || !isdigit((unsigned char)word[i])) {
            return false;
        }
    }
    for(int x = 0; x < word.length(); x++) {
        if(isalpha((unsigned char)word[x])) {
                letter+=1;
        }
        if(isdigit((unsigned char)word[x])) {
            digit+=1;
        }
    }
    if(digit && letter>= 1) {
        return true;
    }
}
