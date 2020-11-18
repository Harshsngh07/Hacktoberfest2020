num = gets.to_i

if num == 0
    puts "E"
elsif num >= 1 && num <= 35
    puts "D"
elsif num >= 36 && num <= 60
    puts "C"
elsif num >= 61 && num <= 85
    puts "B"
elsif num >= 86 && num <= 100
    puts "A"
end
