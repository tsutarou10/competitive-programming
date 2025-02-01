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


def calc_time(h, m):
    return h * 60 + m


def main():
    S, T, X = receive_multiple_int()
    start = calc_time(0, 0)
    end = calc_time(24, 0)
    s_time = calc_time(S, 0)
    t_time = calc_time(T, 0)
    x_time = calc_time(X, 30)

    if S < T:
        if 0 < x_time < s_time or t_time < x_time < end:
            print("No")
            return
    if S > T:
        if t_time < x_time < s_time:
            print("No")
            return
    print("Yes")


if __name__ == "__main__":
    main()
