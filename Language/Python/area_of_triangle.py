import argparse


def tri_area(base, height):
    return base * height * .5


if __name__ == 'main':
    parser = argparse.ArgumentParser()
    parser.add_argument(
        '--base',
        type=int,
        default='',
        help='Enter the base of the triangle'
    )
    parser.add_argument(
        '--height',
        type=int,
        default='',
        help='Enter the height of the triangle'
    )
    args = parser.parse_args()
    area = tri_area(args.base, args.height)
    print('''************************
    Area of the Triangle is:{} 
    ************************
    
    '''.format(area))
