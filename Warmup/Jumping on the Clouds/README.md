# Jumping on the Clouds

- The element at the beginning and the end of array must be 0. 
- There are no continuous 1's in the array. at most, it should be 0101010...

consider the zero sequences right before 1's: 

- (1) 0 (10): 1 jump
- (1) 00 (10): 2 jumps
- (1) 000 (10): 2 jumps
- (1) 0000 (10): 3 jumps
- (1) 00000 (10): 3 jumps
- (1) 000000 (10): 4 jumps
- (1) 0000000 (10): 4 jumps


Have to jump ```floor(num_zeros/2)+1``` times before seeing a 1. 

To avoid boundary considerations, I first pushed 1 at the end of the vector. 

Then, since the last time must be zero and does not have to jump, return (result-1). 

