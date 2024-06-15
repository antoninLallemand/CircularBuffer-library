#include <CircularBufferAL.h>

CircularBufferAL CircularBuffer;
uint16_t bufferSize;
int32_t readData;

int main(void){

    bufferSize = 50;
    CircularBuffer.begin(bufferSize);

    for(int i=0; i<45; i++)
        CircularBuffer.writeData(i);

    for(int i=0; i<50; i++){    
        if(!CircularBuffer.isEmpty())               //for 5 last cycles, isEmpty will be true
            readData = CircularBuffer.readData();
    }
}