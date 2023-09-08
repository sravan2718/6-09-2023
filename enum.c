#include <stdio.h>

int main() {
    enum company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY,  MICROSOFT };
    
    enum company xerox = XEROX;
    enum company google = GOOGLE;
    enum company ebay = EBAY;
    
    printf("the value of xerox is: %d\n", xerox);
    printf("the vakue of google is: %d\n", google);
    printf("the value of ebay is; %d\n", ebay);
    
    return 0;
    
}
   