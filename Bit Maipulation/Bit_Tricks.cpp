1) Check Whether Number is Even or Odd : x & 1
2) Clear the Lowest Set bit of x :  x & (x-1)
3) Extract the Lowest Set bit of x : x & ~(x-1)
4) Clear all bits from LSB to ith bit : mask = ~((1 << i+1 ) - 1); x &= mask;
5) Clearing all bits from MSB to i-th bit : mask = (1 << i) - 1; x &= mask;
6) Divide by 2 : x >>= 1;
7) Multiplying by 2 : x <<= 1;
8) Count set bits in integer 
int countSetBits(int x)
{
    int count = 0;
    while (x)
    {
        x &= (x-1);
        count++;
    }
    return count;
}
9) Checking if given 32-bit integer is power of 2 
int isPowerof2(int x)
{
    return (x && !(x & x-1));
}
10) Unset kth bit in a number
int turnOffKthBit(int n, int k) {
    return n & ~(1 << (k - 1));
}
11)Set kth bit in a number
int turnOnKthBit(int n, int k) {
    return n | (1 << (k - 1));
}
12) Check if kth bit is set for a number
bool isKthBitSet(int n, int k) {
    return (n & (1 << (k - 1))) != 0;
}
13) Toggle the kth bit
int toggleKthBit(int n, int k) {
    return n ^ (1 << (k - 1));
}
//some observations
**When we divide a number by 2^i we get last i bits as remainder
**conversion from decimal to binary : TC = O(logn) SC = O(logn)
**conversion from binary to decimal : TC = O(str.len()) SC = O(1)
**2's complement = 1's complement + 1;

