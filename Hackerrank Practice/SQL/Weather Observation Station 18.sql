SELECT
    ROUND(
        (
            (MAX(LONG_W) - MIN(LONG_W)) +(MAX(LAT_N) - MIN(LAT_N))
        ),
        4
    )
FROM
    STATION;