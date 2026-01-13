# RISC-V Lightweight Kernel

A bare-metal operating system kernel designed for RISC-V architecture, focusing on memory safety and concurrency primitives.

## Key Features
- **Custom Memory Allocator:** Implemented a First-Fit allocator with block coalescing to minimize fragmentation
- **Scheduler:** Thread scheduling logic with support for TCB (Thread Control Blocks).
- **Context Switching:** Low-level assembly routines for stack frame management.
- **Concurrency:** Semaphore-based synchronization primitives.

## Tech Stack
- **Language:** C++, RISC-V Assembly
- **Build System:** Makefile, GCC for RISC-V
- **Target:** QEMU Virt Machine
