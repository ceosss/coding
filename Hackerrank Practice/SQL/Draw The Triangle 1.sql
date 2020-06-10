SET
    @NUM = 21;

SELECT
    REPEAT('* ', @NUM := @NUM -1)
FROM
    information_schema.tables
WHERE
    @NUM > 0;