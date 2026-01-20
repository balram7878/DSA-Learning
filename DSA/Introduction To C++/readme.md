Link for notes->
https://www.notion.so/Lecture-01-Introduction-to-C-2bca9af81c988026bff5ed8119f997d1
https://www.notion.so/Lecture-02-Operator-if-else-loop-in-C-2bda9af81c988063a5f6e7e3b187de59
https://www.notion.so/Lecture-03-04-and-05-Loop-in-C-2bfa9af81c9880c1b133d84caebd9f82
https://www.notion.so/Lecture-06-C-Functions-and-Arrays-2c6a9af81c988098848bc9f270154bd8
https://www.notion.so/Lecture-10-Time-and-Space-Complexity-2d1a9af81c9880d89c9eea35b92ed8f7

---

XOR

0 ^ 1 = 1
1 ^ 0 = 1
0 ^ 0 = 0
1 ^ 1 = 1

-> so, 1^2^3^5^1^2^3^4^5 = 4
-> XOR of same element is always zero regardles of the order

# find missing element in the array using XOR

find XOR of all the elements in the array

for(int i=0; i<size; i++){
result=result^arr[i]^(i+1);
}

and then find XOR with size+1;

result^(size+1);
that it!

---

# rotate array by K position in right

- take a new array and iterate a loop of size of old array
- and then find position of element using (i+  k)%size
- put temp[pos]=arr[i];

# Boyer-Moore Voting Algorithm

- cancel out different elements then the majority survives
  {
    int candidate = 0;
    int count = 0;

    for (int num : nums) {

        if (count == 0) {
            candidate = num;
        }

        if (num == candidate)
            count++;
        else
            count--;
        
    }

    return candidate;
  }


---

# Time Complexity

-> Time Complexity measures how operations grow with input size!
- It measures how fast work grows when input size grows.
-> Time complexity is a function that describes how the number of operations an algorithm performs grows as the input size increases.

1. Logarithmic Time — O(log n)

- Each step cuts the problem size.
- You’re not iterating over all data. You’re throwing away big chunks every time.
- “loop + divide/double = logarithmic”

2. Linearithmic Time — O(n log n)

- Touch every element (linear)
- AND for each phase, you divide the problem (logarithmic)
- So: O(n) × O(log n) = O(n log n)
- loops + divide & conquer = linearithmic” ->
  -> Divide → creates levels (log n)
  -> Conquer (merge/process) → touches all elements at each level

3. Exponential Time — O(2ⁿ)

- Each step branches into multiple paths.
- Work doubles, then doubles again.
- Example: Naive Fibonacci
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

-> Call tree:

fib(5)
 ├── fib(4)
 │    ├── fib(3)
 │    └── fib(2)
 └── fib(3)
      ├── fib(2)
      └── fib(1)

- Same subproblems solved again and again.

---

when we are find the sqrt of any number with binary search it's time complexity is log(n) but if we solve this problem with normal approach it's time complexity is n^1/2.



