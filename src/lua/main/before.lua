local function ini_before()
    print("ini_before")
end

local function end_before()
    print("end_before")
end

before = {
    ini_before = ini_before,
    end_before = end_before
}