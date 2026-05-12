#!/bin/bash
FILE=${1:-solution.cpp}
g++ -o /tmp/cpp_run "$FILE" && /tmp/cpp_run < io/input.txt > io/output.txt
echo "Exit code: $?"
