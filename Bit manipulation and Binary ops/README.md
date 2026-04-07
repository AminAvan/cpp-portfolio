# Bit Manipulation

In C++, bitwise operations are primarily performed on `unsigned` integers to avoid undefined behavior associated with the sign bit.

- AND (`&`): Returns `1` if both corresponding bits are `1`. Otherwise, `0`.
- OR (`|`): Returns `1` if at least one corresponding bit is `1`. Otherwise, `0`.
- XOR (`^`): Returns `1` if the corresponding bits are different. Otherwise, `0`.
- NOT (`~`): Inverts all bits (1s become 0s, 0s become 1s).
- Left Shift (`<<`): Shifts bits to the left by $n$ positions, padding with $zeros$ on the right. Equivalent to multiplying by $2^n$.
- Right Shift (`>>`): Shifts bits to the right by $n$ positions. Equivalent to dividing by $2^n$. (Pads with $zero$ for unsigned integers; behavior is implementation-defined for negative signed integers).