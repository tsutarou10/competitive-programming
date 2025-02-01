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
    N, K, A = map(int, input().split())

    if K < N - A + 1:
        print(A + K - 1)
        return

    rsl = N if (K - (N - A + 1)) % N == 0 else (K - (N - A + 1)) % N
    print(rsl)


if __name__ == "__main__":
    main()
