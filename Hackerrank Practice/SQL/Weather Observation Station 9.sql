SELECT
    DISTINCT(CITY)
FROM
    STATION
WHERE
    (
        LEFT(CITY, 1) != 'a'
        AND LEFT(CITY, 1) != 'e'
        AND LEFT(CITY, 1) != 'i'
        AND LEFT(CITY, 1) != 'o'
        AND LEFT(CITY, 1) != 'u'
    )