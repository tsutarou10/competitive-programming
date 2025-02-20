# str
receive_str = lambda: input()
receive_multiple_str = lambda: input().split()
receive_str_arr = lambda: input().split()
receive_multi_dim_str = lambda N: [input().split() for _ in range(N)]

# int
receive_int = lambda: int(input())
receive_multiple_int = lambda: map(int, input().split())
receive_int_arr = lambda: list(map(int, input().split()))
receive_multi_dim_int = lambda N: [list(map(int, input().split())) for _ in range(N)]

# float
receive_float = lambda: float(input())
receive_multiple_float = lambda: map(float, input().split())
receive_float_arr = lambda: list(map(float, input().split()))
receive_multi_dim_float = lambda N: [
    list(map(float, input().split())) for _ in range(N)
]

# padding
padding = lambda S, N: S.zfill(N)


def main():
    N = receive_int()
    rsl = N if N < 42 else N + 1
    print(f"AGC{padding(str(rsl), 3)}")


if __name__ == "__main__":
    main()
