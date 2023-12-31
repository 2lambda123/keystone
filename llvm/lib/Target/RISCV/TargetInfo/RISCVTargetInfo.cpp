//===-- RISCVTargetInfo.cpp - RISCV Target Implementation -----------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

/* #include "TargetInfo/RISCVTargetInfo.h"
 */#include "MCTargetDesc/RISCVMCTargetDesc.h"
#include "llvm/Support/TargetRegistry.h"
using namespace llvm_ks;
/* 
Target &llvm_ks::getTheRISCV32Target() {
  static Target TheRISCV32Target;
  return TheRISCV32Target;
}

Target &llvm_ks::getTheRISCV64Target() {
  static Target TheRISCV64Target;
  return TheRISCV64Target;
} */
Target llvm_ks::TheRISCV32Target;
Target llvm_ks::TheRISCV64Target;

extern "C" void LLVMInitializeRISCVTargetInfo() {


  RegisterTarget<Triple::riscv32> X(TheRISCV32Target, "riscv32",
                                    "32-bit RISC-V");
  RegisterTarget<Triple::riscv64> Y(TheRISCV64Target, "riscv64",
                                    "64-bit RISC-V");
}
