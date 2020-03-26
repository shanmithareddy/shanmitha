loop: MVI A,01h
      OUT 01h
      CALL DELAY
      MVI A 00h
      OUT 01h
      CALL DELAY
      JMP loop
HLT


DELAY:MVI B,FFh
loop1: NOP
      DCR B
      JNZ loop1
