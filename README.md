# RISC-V Lightweight Kernel

A bare-metal operating system kernel designed for RISC-V architecture, focusing on memory safety and concurrency primitives.

## 🚀 Key Features
- **Custom Memory Allocator:** Implemented a First-Fit allocator with block coalescing (`tryCoalesce`) to minimize fragmentation [Source](src/MemoryAllocator.cpp).
- **Scheduler:** Round-Robin thread scheduling logic with support for TCB (Thread Control Blocks) [Source](src/Scheduler.cpp).
- **Context Switching:** Low-level assembly routines for stack frame management.
- **Concurrency:** Semaphore-based synchronization primitives.

## 🛠️ Tech Stack
- **Language:** C++, RISC-V Assembly
- **Build System:** Makefile, GCC for RISC-V
- **Target:** QEMU Virt Machine

## 🚧 Current Status
Active development. Focusing on optimizing the trap handler for preemptive multitasking.
