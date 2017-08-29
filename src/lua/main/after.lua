local function ini_after()
    print("ini_after")
end

local function end_after()
    print("end_after")
end

after = {
    ini_after = ini_after,
    end_after = end_after
}