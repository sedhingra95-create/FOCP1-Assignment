#include <stdio.h>

int main() {
    int min_dimension;
    int num_photos;
    
    scanf("%d", &min_dimension);
    scanf("%d", &num_photos);
    
    for(int i = 0; i < num_photos; i++) {
        int width, height;
        scanf("%d %d", &width, &height);
        
        if (width < min_dimension || height < min_dimension) {
            printf("UPLOAD ANOTHER\n");
        } else if (width == height) {
            printf("ACCEPTED\n");
        } else {
            printf("CROP IT\n");
        }
    }
    
    return 0;
}