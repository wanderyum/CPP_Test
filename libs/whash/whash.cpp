/**
 * BKDR Hash Function
 */
int BKDRHash(const char* key, int tableSize){
    unsigned long hashVal = 0;
    unsigned int seed = 1313; /* 31 131 1313 13131 131313 etc. */

    while (*key){
        hashVal = hashVal * seed + (*key++);
    }

    return hashVal % tableSize;
}
