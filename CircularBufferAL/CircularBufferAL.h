// Library managing a circular buffer
// Contain 4 public functions
// Author : Antonin Lallemand (2023) - Last update : 06/2024

#ifndef CircularBufferAL_h
#define CircularBufferAL_h

#include <stdint.h>

class CircularBufferAL {
public :

    /*!
    * \brief function to be implemented in the setup loop of the main code
    * \param bufferSize maximum number of elements in the buffer (default value = 100)
    */
    void begin(uint16_t bufferSize = 100);

    /*!
    * \brief adding an element in the buffer
    * \param data data to add in the buffer
    */
    void writeData(int32_t data);

    /*!
    * \brief return the oldest unread value or 0 if buffer is empty
    */
    int32_t readData();

    /*!
    * \brief return true if the buffer is empty
    */
    bool isEmpty();

// private :
  int32_t* circularBuffer;
  uint16_t writeIndex = 0;
  uint16_t readIndex = 0;
  uint16_t CircularBufferSize;
  bool IndexScale = false; //true if writeIndex has one round advance on readIndex
};

#endif