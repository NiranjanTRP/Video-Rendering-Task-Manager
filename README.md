
# Video Rendering Task Manager

## About the Project
This project implements two CPU Scheduling Algorithms using C:
1. First Come First Serve (FCFS)
2. Non-Preemptive Priority Scheduling

It calculates waiting time, turnaround time and average waiting time for each task and compares their performance.

## Objectives
- Implement FCFS Scheduling.
- Implement Non-Preemptive Priority Scheduling.
- Calculate Waiting Time (WT).
- Calculate Turnaround Time (TAT).
- Compare average waiting times.

## Technologies Used
- Programming Language: C
- Compiler: GCC
- Concepts: CPU Scheduling, Operating Systems

## Input Details
Each task contains:
- Arrival Time (AT)
- Burst Time (BT)
- Priority

Lower priority number indicates higher priority.

## Sample Input
4
0 5 2
1 3 1
2 8 3
3 6 2

## Sample Output
FCFS Scheduling:
T1 WT=0 TAT=5
T2 WT=4 TAT=7
T3 WT=6 TAT=14
T4 WT=13 TAT=19

Priority Scheduling:
T1 WT=0 TAT=5
T2 WT=4 TAT=7
T4 WT=5 TAT=11
T3 WT=12 TAT=20

FCFS Average WT = 5.75
Priority Average WT = 5.25

Priority performs better.

## How to Run

1. Clone this repository.
2. Open the project folder.
3. Compile the program:

gcc main.c -o main

4. Run the program:

./main

## Conclusion
Both scheduling algorithms are implemented successfully.
Their average waiting times are compared to identify
the better scheduling algorithm.

## Author
Niranjan S S
