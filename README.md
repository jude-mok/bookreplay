# BookReplay

A C++ order book and market data replay engine focused on correctness, reproducible benchmarks, and documented performance trade-offs.

## Current status

Early learning stage. I am learning C++ fundamentals through small exercises before implementing the order book and replay engine. Neither component is implemented yet.

## Goals

- Build a correct single-threaded order book with order addition, cancellation, and trade execution.
- Add tests for expected behavior and edge cases.
- Replay recorded market data and handle invalid input.
- Measure runtime and memory usage before optimizing.
- Compare changes under the same conditions and document unsuccessful approaches as well as improvements.

This is a learning and systems engineering project, not a live trading system. Performance claims will be backed by documented measurements.

## Repository layout

```text
pre_practice/    Small C++ learning exercises
```

The current exercise, `pre_practice/practice.cpp`, prints `Hello C++`.

## Run the current exercise

Requires a C++ compiler. Development currently uses Apple Clang on macOS (Apple Silicon).

From the repository root:

```bash
mkdir -p build
clang++ -std=c++17 -Wall -Wextra -Wpedantic pre_practice/practice.cpp -o build/practice
./build/practice
```

Expected output:

```text
Hello C++
```

Generated executables and build output are excluded from version control. For new exercises, place executable output in `build/` as well.
